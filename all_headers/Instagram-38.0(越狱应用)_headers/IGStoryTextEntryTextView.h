//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGStoryAsset-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class IGTextView, NSAttributedString, NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIBezierPath, UIColor, UIDragInteraction, UIFont, UITextRange;
@protocol IGStoryTextEntryTextViewDelegate;

@interface IGStoryTextEntryTextView : UIView <UITextViewDelegate, IGStoryAsset>
{
    IGTextView *_textView;
    UIBezierPath *_cachedOutlinePath;
    double _outlinePathComputationIdentifier;
    _Bool _outlinePathComputationInProgress;
    struct {
        unsigned int shouldBeginEditing:1;
        unsigned int shouldEndEditing:1;
        unsigned int didBeginEditing:1;
        unsigned int didEndEditing:1;
        unsigned int shouldChangeTextInRange:1;
        unsigned int didChange:1;
        unsigned int didChangeSelection:1;
    } _delegateFlags;
    id <IGStoryTextEntryTextViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGStoryTextEntryTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
- (id)storyAssetDiffableIdentifier;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long spellCheckingType;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(copy) NSAttributedString *attributedText;
@property(nonatomic) struct _NSRange selectedRange;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSString *text;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)reloadInputViews;
- (id)outlinePath;
- (void)recomputeOutlinePath;
- (void)invalidateCachedOutlinePath;
- (void)didEndEditing:(id)arg1;
- (void)didBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

