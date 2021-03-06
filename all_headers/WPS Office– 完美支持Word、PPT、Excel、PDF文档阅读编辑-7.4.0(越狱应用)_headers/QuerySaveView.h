//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UILabel, UITextField;
@protocol QuerySaveViewDelegate;

@interface QuerySaveView : UIView <UITextFieldDelegate>
{
    _Bool _isShowKeyboard;
    int _ttl;
    UITextField *_textFieldOnSaveAsBox;
    UIButton *_comfirmButtonOnSaveAsBox;
    id <QuerySaveViewDelegate> _delegate;
    NSString *_filename;
    NSString *_originalFilename;
    NSString *_formatsIsNotSupported;
    NSString *_prefferedFormat;
    UIView *_parentView;
    UIView *_currentBox;
    UIImageView *_backgroundView;
    UIView *_warnView;
    UILabel *_warnViewLabel;
    NSTimer *_timer;
    UIButton *_formatSelectButton;
    UIView *_formatBox;
    NSString *_userSaveAsFormat;
    UILabel *_formatShowLabel;
    NSString *_fileFrom;
}

@property(retain, nonatomic) NSString *fileFrom; // @synthesize fileFrom=_fileFrom;
@property(nonatomic) _Bool isShowKeyboard; // @synthesize isShowKeyboard=_isShowKeyboard;
@property(retain, nonatomic) UILabel *formatShowLabel; // @synthesize formatShowLabel=_formatShowLabel;
@property(retain, nonatomic) NSString *userSaveAsFormat; // @synthesize userSaveAsFormat=_userSaveAsFormat;
@property(retain, nonatomic) UIView *formatBox; // @synthesize formatBox=_formatBox;
@property(retain, nonatomic) UIButton *formatSelectButton; // @synthesize formatSelectButton=_formatSelectButton;
@property(nonatomic) int ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *warnViewLabel; // @synthesize warnViewLabel=_warnViewLabel;
@property(retain, nonatomic) UIView *warnView; // @synthesize warnView=_warnView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *currentBox; // @synthesize currentBox=_currentBox;
@property(nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSString *prefferedFormat; // @synthesize prefferedFormat=_prefferedFormat;
@property(nonatomic) NSString *formatsIsNotSupported; // @synthesize formatsIsNotSupported=_formatsIsNotSupported;
@property(retain, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) id <QuerySaveViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *comfirmButtonOnSaveAsBox; // @synthesize comfirmButtonOnSaveAsBox=_comfirmButtonOnSaveAsBox;
@property(retain, nonatomic) UITextField *textFieldOnSaveAsBox; // @synthesize textFieldOnSaveAsBox=_textFieldOnSaveAsBox;
- (void)removeCurrentPrompt;
- (void)showCurrentPathIsAvailablePrompt:(id)arg1;
- (void)showFormatIsNotSupportedPrompt;
- (void)showSaveAsPrompt;
- (void)showIsSavePrompt;
- (void)showPrompt:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)newSaveAsBox;
- (id)newIsSaveBox;
- (id)newCurrentPathIsUnavailableBox;
- (id)newFormatIsNotSupportedBox;
- (id)newInformationWarnBoxWithMessage:(id)arg1 fileFrom:(id)arg2;
- (void)foldButtonTouched:(id)arg1;
- (void)formatSelectedButtonTouched:(id)arg1;
- (void)selectTxtFormatButtonTouched;
- (void)selectDocFormatButtonTouched;
- (void)doNotSaveButtonTouched:(id)arg1;
- (void)saveAsButtonTouched:(id)arg1;
- (void)saveButtonTouched:(id)arg1;
- (void)comfirmButtonForSaveAsTouched:(id)arg1;
- (void)comfirmButtonForDefaultSaveFormatTouched:(id)arg1;
- (void)cancelButtonTouched:(id)arg1;
- (void)timeOut:(id)arg1;
- (void)endTimer;
- (void)beginTimer;
- (void)removeWarnView;
- (void)showWarnView:(id)arg1;
- (id)newBoxWithOption:(int)arg1;
- (void)divideFilename:(id)arg1 toName:(id *)arg2 andSuffix:(id *)arg3;
- (void)darkenBackground;
- (void)adjustCurrentBoxToCenter;
- (id)compressString:(id)arg1 withMaxCharNumber:(int)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithParent:(id)arg1 filename:(id)arg2 preferredFormat:(id)arg3;
- (id)loadImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

