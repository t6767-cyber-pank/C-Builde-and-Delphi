object Form1: TForm1
  Left = 0
  Top = 0
  ClientHeight = 661
  ClientWidth = 1362
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object StringGrid1: TStringGrid
    Left = 0
    Top = 27
    Width = 1362
    Height = 634
    Align = alClient
    FixedCols = 0
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing, goRowMoving, goColMoving, goTabs]
    ParentFont = False
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1362
    Height = 27
    Align = alTop
    TabOrder = 1
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 156
      Height = 25
      Align = alLeft
      Caption = '  '#1087#1086' '#1086#1073#1086#1088#1091#1076#1086#1074#1072#1085#1080#1102'   '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label2: TLabel
      Left = 278
      Top = 1
      Width = 137
      Height = 25
      Align = alLeft
      Caption = '  '#1087#1086' '#1080#1085#1074'. '#1085#1086#1084#1077#1088#1091'   '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label3: TLabel
      Left = 536
      Top = 1
      Width = 129
      Height = 25
      Align = alLeft
      Caption = '  '#1087#1086' '#1086#1090#1076#1077#1083#1077#1085#1080#1102'   '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label4: TLabel
      Left = 786
      Top = 1
      Width = 173
      Height = 25
      Align = alLeft
      Caption = '  '#1087#1086' '#1093#1072#1088#1072#1082#1090#1077#1088#1080#1089#1090#1080#1082#1072#1084'   '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Label5: TLabel
      Left = 1080
      Top = 1
      Width = 122
      Height = 25
      Align = alLeft
      Caption = '  '#1087#1086' '#1082#1086#1084#1087#1083#1077#1082#1090'.   '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ExplicitHeight = 19
    end
    object Edit1: TEdit
      Left = 157
      Top = 1
      Width = 121
      Height = 25
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnChange = Edit1Change
      ExplicitHeight = 26
    end
    object Edit2: TEdit
      Left = 415
      Top = 1
      Width = 121
      Height = 25
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnChange = Edit2Change
      ExplicitHeight = 26
    end
    object Edit3: TEdit
      Left = 665
      Top = 1
      Width = 121
      Height = 25
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnChange = Edit3Change
      ExplicitHeight = 26
    end
    object Edit4: TEdit
      Left = 959
      Top = 1
      Width = 121
      Height = 25
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      OnChange = Edit4Change
      ExplicitHeight = 26
    end
    object Edit5: TEdit
      Left = 1202
      Top = 1
      Width = 168
      Height = 25
      Align = alLeft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
      OnChange = Edit5Change
      ExplicitHeight = 26
    end
  end
  object MainMenu1: TMainMenu
    Left = 384
    Top = 128
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object Excel1: TMenuItem
        Caption = #1042#1099#1074#1086#1076' '#1074' Excel'
        OnClick = Excel1Click
      end
      object N2: TMenuItem
        Caption = #1047#1072#1082#1088#1099#1090#1100
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1054#1073#1086#1088#1091#1076#1086#1074#1072#1085#1080#1077
      object N4: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N4Click
      end
    end
    object N5: TMenuItem
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
      object N6: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N6Click
      end
    end
    object N7: TMenuItem
      Caption = #1040#1076#1084#1080#1085#1080#1089#1090#1088#1080#1088#1086#1074#1072#1085#1080#1077
      object N8: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
        OnClick = N8Click
      end
      object N9: TMenuItem
        Caption = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
        OnClick = N9Click
      end
    end
  end
end
