<!-- #include file="../include/VBFunc.vbs"-->
<%@ page contentType="text/html; charset=gb2312" errorPage="../include/error.jsp"%>
<%@ page language="java" import="java.util.*,jbportal.PortalUtil" %>
<jsp:useBean id="oSys" scope="session" class="jbportal.classServiceBean" />
<%
    String m_func_id = "";
    String m_IfNew = "";

    String modu_id = "";
    String Title = "";
    String href = "";
    String Description = "";
    String href_desc = "";
    String AllowMinimize = "";
    String Width = "";
    String Zone = "";
    String HeightUnitType = "";
    String HeightEnabled = "";
    String IsVisible = "";
    String AllowRemove = "";
    String IsIncluded = "";
    String WidthEnabled = "";
    String WidthUnitType = "";
    String Height = "";
    String HasFrame = "";
    String FrameState = "";
    String RequiresIsolation = "";

    Hashtable dct_Para = new Hashtable();
    Hashtable dct_Key = new Hashtable();
    int sReturn = 100;

	//如果m_IfNew = true表示是新增的功能在做修改，否则不是
	//新增的功能修改时要同时修改modu_func表以保持同步
	 m_IfNew = request.getParameter("m_Status");
	 m_func_id = request.getParameter("func_id");
    if (m_func_id == null)
          m_func_id = "";
    modu_id = request.getParameter("modu_id");
    if (modu_id == null)
          modu_id = "";
    Title =request.getParameter("Title");//new String(request.getParameter("Title").getBytes("iso8859-1"),"GB2312");
    if (Title == null)
        Title = "";

    href = request.getParameter("href");
    if (href == null)
        href = "";
    Description =request.getParameter("Description");//new String(request.getParameter("Description").getBytes("iso8859-1"),"GB2312");
    if (Description == null)
        Description = "";

    href_desc =request.getParameter("href_desc");//new String(request.getParameter("href_desc").getBytes("iso8859-1"),"GB2312");
    if (href_desc == null)
        href_desc = "";
    AllowMinimize = request.getParameter("AllowMinimize");
    if (AllowMinimize == null)
        AllowMinimize = "";
    Width = request.getParameter("Width");
    if (Width == null)
        Width = "";
    Zone = request.getParameter("Zone");
    if (Zone == null)
        Zone = "";
    HeightUnitType = request.getParameter("HeightUnitType");
    if (HeightUnitType == null)
        HeightUnitType = "";
    HeightEnabled = request.getParameter("HeightEnabled");
    if (HeightEnabled == null)
        HeightEnabled = "";
    IsVisible = request.getParameter("IsVisible");
    if (IsVisible == null)
        IsVisible = "";
    AllowRemove = request.getParameter("AllowRemove");
    if (AllowRemove == null)
        AllowRemove = "";
    IsIncluded = request.getParameter("IsIncluded");
    if (IsIncluded == null)
        IsIncluded = "";
    WidthEnabled = request.getParameter("WidthEnabled");
    if (WidthEnabled == null)
        WidthEnabled = "";
    WidthUnitType = request.getParameter("WidthUnitType");
    if (WidthUnitType == null)
        WidthUnitType = "";
    Height = request.getParameter("Height");
    if (Height == null)
        Height = "";
    HasFrame = request.getParameter("HasFrame");
    if (HasFrame == null)
        HasFrame = "";
    FrameState = request.getParameter("FrameState");
    if (FrameState == null)
        FrameState = "";
    RequiresIsolation = request.getParameter("RequiresIsolation");
    if (RequiresIsolation == null)
        RequiresIsolation = "";
    //设置主键
	dct_Key.put("func_id",m_func_id);
    //设置值
	dct_Para.put("modu_id",modu_id);
	dct_Para.put("Title",Title);
	dct_Para.put("href",href);
	dct_Para.put("Description",Description);
	dct_Para.put("href_desc",href_desc);
	dct_Para.put("AllowMinimize",PortalUtil.toDouble(AllowMinimize));
	dct_Para.put("Width",PortalUtil.toDouble(Width));
	dct_Para.put("Zone",PortalUtil.toDouble(Zone));
	dct_Para.put("HeightUnitType",HeightUnitType);
	dct_Para.put("HeightEnabled",PortalUtil.toDouble(HeightEnabled));
	dct_Para.put("IsVisible",PortalUtil.toDouble(IsVisible));
	dct_Para.put("AllowRemove",PortalUtil.toDouble(AllowRemove));
	dct_Para.put("IsIncluded",PortalUtil.toDouble(IsIncluded));
	dct_Para.put("WidthEnabled",PortalUtil.toDouble(WidthEnabled));
	dct_Para.put("WidthUnitType",WidthUnitType);
	dct_Para.put("Height",PortalUtil.toDouble(Height));
	dct_Para.put("HasFrame",PortalUtil.toDouble(HasFrame));
	dct_Para.put("FrameState",PortalUtil.toDouble(FrameState));
	dct_Para.put("RequiresIsolation",PortalUtil.toDouble(RequiresIsolation));
    dct_Para.put("RefreshInterval",PortalUtil.toDouble(request.getParameter("RefreshInterval")));
	if (m_IfNew!=null){
		sReturn = oSys.UpdateFunction(dct_Key,dct_Para,"func_def",true);
    }
	else{
		sReturn = oSys.update(dct_Key,dct_Para,"func_def",false);
	}

	if (sReturn!=0){
		String ShowDBError = "update error";
    }
	else{
		response.sendRedirect("FunctionDetails.jsp?m_NodeValue=" + m_func_id);
	}
%>

