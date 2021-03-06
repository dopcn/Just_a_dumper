//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FirstPageCompontBaseObject.h"

#import "FPFirstPageCompontProtocol-Protocol.h"
#import "FixLongPageScrollviewDataSource-Protocol.h"
#import "FixLongPageScrollviewDelgegate-Protocol.h"
#import "OneRowShortCutItemDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FixLongPageView, ModelMainViewItem, NSArray, NSMutableArray, NSString, UITapGestureRecognizer, UIView;

@interface OneRowShortCutController : FirstPageCompontBaseObject <FixLongPageScrollviewDataSource, FixLongPageScrollviewDelgegate, OneRowShortCutItemDelegate, UIScrollViewDelegate, FPFirstPageCompontProtocol>
{
    NSArray *_dataArray;
    float _leftRightOffset;
    ModelMainViewItem *_item;
    FixLongPageView *_scrollView;
    NSMutableArray *_contentViews;
    UITapGestureRecognizer *_tapGesture;
    UIView *_view;
}

@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) NSMutableArray *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) FixLongPageView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) ModelMainViewItem *item; // @synthesize item=_item;
@property(nonatomic) float leftRightOffset; // @synthesize leftRightOffset=_leftRightOffset;
- (void).cxx_destruct;
- (long long)pageIDFromURLStr:(id)arg1;
- (void)clickAd:(long long)arg1;
- (void)shortcutItemSelected:(id)arg1;
- (void)pageScrollView:(id)arg1 didTapPageAtIndex:(long long)arg2;
- (struct CGSize)sizeCellForPageScrollView:(id)arg1;
- (id)pageScrollView:(id)arg1 viewForRowAtIndex:(int)arg2;
- (long long)numberOfPageInPageScrollView:(id)arg1;
- (void)refreshImageview;
- (void)requestData;
- (void)willAppear;
- (_Bool)isLoadingData;
- (void)resetShortcutItems;
- (void)setModelItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long type;

@end

