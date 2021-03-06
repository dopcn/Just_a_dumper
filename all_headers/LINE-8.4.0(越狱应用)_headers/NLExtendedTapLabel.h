//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString;
@protocol NLExtendedTapLabelDelegate;

@interface NLExtendedTapLabel : UIView
{
    // Error parsing type: , name: extendedTapDetector
    // Error parsing type: , name: drawingView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: highlightAttributes.storage
    // Error parsing type: , name: isHandledTouchesForLinksOnly
    // Error parsing type: , name: attributedText
    // Error parsing type: , name: touchesBegan
    // Error parsing type: , name: touchedAttributedText
    // Error parsing type: , name: animationTime
}

+ (struct CGSize)measureSize:(id)arg1 width:(double)arg2 numberOfLines:(long long)arg3;
- (CDUnknownBlockType).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFitWithConstrainedWidth:(double)arg1;
- (void)layoutSubviews;
@property(nonatomic, retain) NSAttributedString *attributedText; // @synthesize attributedText;
- (void)clearLinks;
- (void)setLinkForRange:(struct _NSRange)arg1 userData:(id)arg2 highlightAttributes:(id)arg3;
- (void)didChangeSticon;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) __weak id <NLExtendedTapLabelDelegate> delegate; // @synthesize delegate;

@end

