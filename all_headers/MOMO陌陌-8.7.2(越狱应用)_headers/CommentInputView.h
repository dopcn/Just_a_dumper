//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDPhotoPickerViewDelegate-Protocol.h"

@class MDEmotion, MDPhotoPickerView, MDSiteSelectControl, MDTextView, NSArray, NSString, UIButton, UILabel;
@protocol CommentInputViewDelegate;

@interface CommentInputView : UIView <MDPhotoPickerViewDelegate>
{
    id <CommentInputViewDelegate> delegate;
    NSString *commentContent;
    MDPhotoPickerView *photoPicker;
    int inputStyle;
    MDTextView *textView;
    UIView *autoFrameView;
    UILabel *tipLabel;
    UIButton *changeKeyboardBtn;
    long long contentLimitLength;
    struct CGRect pickerFrame;
    int pickerType;
    int pickerStyle;
    _Bool autoSpecifiedTextLength;
    NSArray *tempImageArray;
    MDEmotion *tempEmotion;
    _Bool _noQuickSticker;
    UIView *_placeholderInputView;
    double _beginOriginY;
    MDSiteSelectControl *_siteSelectControl;
    long long _animationCurve;
    double _animationDuration;
    struct CGRect _animationFrame;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property(nonatomic) struct CGRect animationFrame; // @synthesize animationFrame=_animationFrame;
@property(retain, nonatomic) MDSiteSelectControl *siteSelectControl; // @synthesize siteSelectControl=_siteSelectControl;
@property(nonatomic) double beginOriginY; // @synthesize beginOriginY=_beginOriginY;
@property(nonatomic) _Bool noQuickSticker; // @synthesize noQuickSticker=_noQuickSticker;
@property(retain, nonatomic) UIView *placeholderInputView; // @synthesize placeholderInputView=_placeholderInputView;
@property(retain, nonatomic) UIView *autoFrameView; // @synthesize autoFrameView;
@property(nonatomic) struct CGRect pickerFrame; // @synthesize pickerFrame;
@property(retain, nonatomic) MDPhotoPickerView *photoPicker; // @synthesize photoPicker;
@property(retain, nonatomic) MDTextView *textView; // @synthesize textView;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent;
@property(nonatomic) id <CommentInputViewDelegate> delegate; // @synthesize delegate;
- (void)multiSelectionView:(id)arg1 willHideWithFrame:(struct CGRect)arg2 animationDuration:(double)arg3;
- (void)multiSelectionView:(id)arg1 willShowWithFrame:(struct CGRect)arg2 animationDuration:(double)arg3;
- (void)emojiviewwillHideWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)emojiViewWillShowWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)handleKeyBoardFrameChangeNotification:(id)arg1;
- (void)doFrameChangeAnimation;
- (void)handleChangingWithKeyboardEndFrame:(struct CGRect)arg1 animationDuration:(double)arg2 animationCurve:(long long)arg3;
- (void)handleChangingWithKeyboardEndFrame:(struct CGRect)arg1 animationDuration:(double)arg2;
- (id)superViewForMultiSelectionView;
- (void)imagePickerControllerDidCancelForPickerView:(id)arg1;
- (void)selectedPhotoDidChangeForPickerView:(id)arg1;
- (id)superViewForPickerView;
- (void)delegateShouldResignFirstResponder;
- (void)resignAllFirstResponder;
- (void)resignAllInputFirstResponder;
- (void)resetKeyBoard;
- (void)changeKeyBoardType:(id)arg1;
- (void)changeButtonState:(id)arg1;
- (void)sendText;
- (void)removeText;
- (void)clickEmoji:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)didMoveToSuperview;
- (void)removePlaceholderInputView;
- (void)showPlaceholderInputView;
- (void)dismissAllCustomKeyboard;
- (void)dismissKeyboard;
- (void)showMultiImageSelectedKeyboardAnimated:(_Bool)arg1;
- (void)showMultiImageSelectedKeyboard;
- (void)showKeyboard;
@property(copy, nonatomic) NSString *selectedSiteString;
@property(copy, nonatomic) NSString *selectedSiteID;
- (void)setSpecifiedText:(id)arg1;
@property(readonly, nonatomic) _Bool hasEditedImage;
@property(retain, nonatomic) MDEmotion *emotion; // @dynamic emotion;
@property(retain, nonatomic) NSArray *contentImages; // @dynamic contentImages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 placeHolderString:(id)arg2 inputStyle:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

