object Form1: TForm1
  Left = 0
  Top = 0
  ClientHeight = 512
  ClientWidth = 1016
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 0
    Top = 35
    Width = 1016
    Height = 477
    Align = alClient
    FixedCols = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goTabs, goRowSelect]
    ParentFont = False
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1016
    Height = 35
    Align = alTop
    TabOrder = 1
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 131
      Height = 33
      Align = alLeft
      Caption = #1087#1086' '#1085#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1102
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label2: TLabel
      Left = 277
      Top = 1
      Width = 110
      Height = 33
      Align = alLeft
      Caption = #1087#1086' '#1087#1086#1089#1090#1072#1074#1097#1080#1082#1091
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label3: TLabel
      Left = 532
      Top = 1
      Width = 98
      Height = 33
      Align = alLeft
      Caption = #1087#1086' '#1082#1072#1090#1077#1075#1086#1088#1080#1080
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label4: TLabel
      Left = 775
      Top = 1
      Width = 115
      Height = 33
      Align = alLeft
      Caption = #1087#1086' '#1087#1088#1080#1084#1077#1095#1072#1085#1080#1102
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object ComboBox1: TComboBox
      Left = 132
      Top = 1
      Width = 145
      Height = 27
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = ComboBox1Change
    end
    object ComboBox2: TComboBox
      Left = 387
      Top = 1
      Width = 145
      Height = 27
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnChange = ComboBox2Change
    end
    object ComboBox3: TComboBox
      Left = 630
      Top = 1
      Width = 145
      Height = 27
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnChange = ComboBox3Change
    end
    object ComboBox4: TComboBox
      Left = 890
      Top = 1
      Width = 145
      Height = 27
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnChange = ComboBox4Change
    end
  end
  object Panel2: TPanel
    Left = 256
    Top = 176
    Width = 409
    Height = 201
    Caption = #1048#1076#1077#1090' '#1080#1084#1087#1086#1088#1090' '#1086#1078#1080#1076#1072#1081#1090#1077':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Visible = False
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\67\Desktop' +
      '\baza\baza.mdb;Persist Security Info=False'
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 480
    Top = 112
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 528
    Top = 264
  end
  object MainMenu1: TMainMenu
    Left = 184
    Top = 208
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N8: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100' '#1074#1089#1077' '#1079#1072#1087#1080#1089#1080
        OnClick = N8Click
      end
      object N2: TMenuItem
        Caption = #1047#1072#1082#1088#1099#1090#1100
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
      object N4: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1048#1079#1084#1077#1085#1080#1090#1100
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N6Click
      end
    end
    object N7: TMenuItem
      Caption = #1048#1084#1087#1086#1088#1090'/'#1069#1082#1089#1087#1086#1088#1090
      object EXCEL1: TMenuItem
        Caption = #1069#1082#1089#1087#1086#1088#1090' '#1074' EXCEL'
        OnClick = EXCEL1Click
      end
      object EXCEL2: TMenuItem
        Caption = #1048#1084#1087#1086#1088#1090' '#1089' EXCEL'
        OnClick = EXCEL2Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 400
    Top = 104
  end
end
