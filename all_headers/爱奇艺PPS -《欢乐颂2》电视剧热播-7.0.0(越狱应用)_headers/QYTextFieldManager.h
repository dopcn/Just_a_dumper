//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;

@interface QYTextFieldManager : RCTViewManager <UITextFieldDelegate>
{
}

+ (id)propConfig_cursorSize;
+ (id)propConfig_cursorColor;
+ (id)propConfig_mostRecentEventCount;
+ (id)propConfig_fontFamily;
+ (id)propConfig_fontStyle;
+ (id)propConfig_fontWeight;
+ (id)propConfig_fontSize;
+ (id)propConfig_selectionColor;
+ (id)propConfig_textAlign;
+ (id)propConfig_autoCapitalize;
+ (id)propConfig_color;
+ (id)propConfig_password;
+ (id)propConfig_secureTextEntry;
+ (id)propConfig_enablesReturnKeyAutomatically;
+ (id)propConfig_returnKeyType;
+ (id)propConfig_onSelectionChange;
+ (id)propConfig_keyboardAppearance;
+ (id)propConfig_keyboardType;
+ (id)propConfig_blurOnSubmit;
+ (id)propConfig_selectTextOnFocus;
+ (id)propConfig_clearTextOnFocus;
+ (id)propConfig_clearButtonMode;
+ (id)propConfig_maxLength;
+ (id)propConfig_text;
+ (id)propConfig_placeholderTextColor;
+ (id)propConfig_placeholder;
+ (id)propConfig_editable;
+ (id)propConfig_autoCorrect;
+ (id)propConfig_caretHidden;
+ (void)load;
+ (id)moduleName;
- (void)set_cursorColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (CDUnknownBlockType)uiBlockToAmendWithShadowView:(id)arg1;
- (void)set_fontFamily:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontWeight:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontSize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

