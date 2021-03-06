//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, UIImageView;
@protocol IPSkinSelectionViewDelegate;

@interface IPSkinSelectionView : UIView <UIGestureRecognizerDelegate>
{
    NSArray *_colorButtons;
    id <IPSkinSelectionViewDelegate> _delegate;
    unsigned int _currentSelectedIndex;
    UIView *_containerView;
    UIImageView *_skinCheckImageView;
}

@property(nonatomic) __weak UIImageView *skinCheckImageView; // @synthesize skinCheckImageView=_skinCheckImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(nonatomic) __weak id <IPSkinSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapped:(id)arg1;
- (void)colorButtonClicked:(id)arg1;
- (unsigned int)_buttonTagToIndex:(unsigned int)arg1;
- (unsigned int)_indexToButtonTag:(unsigned int)arg1;
- (void)_exclusiveSelectButton:(id)arg1;
- (id)initWithFixedSize:(struct CGPoint)arg1;

@end

