//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLImageToolBase.h"

#import "CLColorPickerViewDelegate-Protocol.h"
#import "CLFontPickerViewDelegate-Protocol.h"
#import "CLTextSettingViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class CLTextSettingView, CLToolbarMenuItem, NSString, UIImage, UIScrollView, UIView, _CLTextView;

@interface CLTextTool : CLImageToolBase <CLColorPickerViewDelegate, CLFontPickerViewDelegate, UITextViewDelegate, CLTextSettingViewDelegate>
{
    UIView *_strokePreviewBackground;
    UIImage *_originalImage;
    UIView *_workingView;
    CLTextSettingView *_settingView;
    CLToolbarMenuItem *_textBtn;
    CLToolbarMenuItem *_colorBtn;
    CLToolbarMenuItem *_fontBtn;
    CLToolbarMenuItem *_alignLeftBtn;
    CLToolbarMenuItem *_alignCenterBtn;
    CLToolbarMenuItem *_alignRightBtn;
    UIScrollView *_menuScroll;
    _CLTextView *_selectedTextView;
}

+ (id)optionalInfo;
+ (double)defaultDockedNumber;
+ (_Bool)isAvailable;
+ (id)defaultTitle;
+ (id)subtools;
@property(retain, nonatomic) _CLTextView *selectedTextView; // @synthesize selectedTextView=_selectedTextView;
@property(retain, nonatomic) UIView *workingView; // @synthesize workingView=_workingView;
- (void).cxx_destruct;
- (void)textSettingView:(id)arg1 didChangeFont:(id)arg2;
- (void)textSettingView:(id)arg1 didChangeBorderWidth:(double)arg2;
- (void)textSettingView:(id)arg1 didChangeBorderColor:(id)arg2;
- (void)textSettingView:(id)arg1 didChangeFillColor:(id)arg2;
- (void)textSettingView:(id)arg1 didChangeText:(id)arg2;
- (void)pushedButton:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)beginTextEditting;
- (void)showSettingViewWithMenuIndex:(long long)arg1;
- (void)hideSettingView;
- (void)addNewTextAtPoint:(struct CGPoint)arg1;
- (void)workingViewDidTap:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)setColorButtons;
- (id)ovalPath;
- (void)setMenu;
- (void)activeTextViewDidTap:(id)arg1;
- (void)activeTextViewDidChange:(id)arg1;
- (void)setMenuBtnEnabled:(_Bool)arg1;
- (id)buildImage:(id)arg1;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)cleanup;
- (void)dealloc;
- (void)finishSetup;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

