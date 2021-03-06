//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBExplainDialogDelagate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView, UsedCarDetailCarInfoModel;

@interface UsedCarDetailCarInfoAdvantagesView : UIView <WBExplainDialogDelagate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_itemViewsList;
    NSMutableArray *_explainItems;
    NSMutableArray *_logItems;
    UsedCarDetailCarInfoModel *_carInfoModel;
}

+ (double)heightWithData:(id)arg1;
@property(retain, nonatomic) UsedCarDetailCarInfoModel *carInfoModel; // @synthesize carInfoModel=_carInfoModel;
@property(retain, nonatomic) NSMutableArray *logItems; // @synthesize logItems=_logItems;
@property(retain, nonatomic) NSMutableArray *explainItems; // @synthesize explainItems=_explainItems;
@property(retain, nonatomic) NSMutableArray *itemViewsList; // @synthesize itemViewsList=_itemViewsList;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)explainDialog:(id)arg1 didScrollShowCellAtIndex:(long long)arg2;
- (void)explainDialog:(id)arg1 willDismissOnShowCell:(id)arg2 atIndex:(long long)arg3;
- (void)tapClickAction:(id)arg1;
- (void)dataTransform;
- (void)createScrollView;
- (void)removeSubviews;
- (void)reloadViewWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

