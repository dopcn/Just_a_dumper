//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBCGiftCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBCButton, UILabel;
@protocol TBCGiftCollectionViewCellDelegate;

@interface TBCGiftPageView : UIView <TBCGiftCollectionViewCellDelegate>
{
    id <TBCGiftCollectionViewCellDelegate> _delegate;
    NSMutableArray *_cellSubviews;
    NSArray *_items;
    UIView *_emotionView;
    UILabel *_emotionHintLabel;
    TBCButton *_emotionButton;
    NSMutableArray *_verticalLines;
}

@property(retain, nonatomic) NSMutableArray *verticalLines; // @synthesize verticalLines=_verticalLines;
@property(retain, nonatomic) TBCButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(retain, nonatomic) UILabel *emotionHintLabel; // @synthesize emotionHintLabel=_emotionHintLabel;
@property(retain, nonatomic) UIView *emotionView; // @synthesize emotionView=_emotionView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *cellSubviews; // @synthesize cellSubviews=_cellSubviews;
@property(nonatomic) id <TBCGiftCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)giftCollectionViewCellDidSelect:(id)arg1;
- (id)firstCell;
- (void)showEmotionView:(_Bool)arg1;
- (void)bindData:(id)arg1;
- (void)loadSubview;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

