//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UITableView;

@interface QYReadyBuyView : UIView
{
    UITableView *_goodsListView;
    NSArray *_goodsArray;
    CDUnknownBlockType _callBackBlock;
}

@property(retain, nonatomic) UITableView *goodsListView; // @synthesize goodsListView=_goodsListView;
@property(copy, nonatomic) NSArray *goodsArray; // @synthesize goodsArray=_goodsArray;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
- (void).cxx_destruct;
- (void)setCallback:(CDUnknownBlockType)arg1;
- (void)updateReadyBuy:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

