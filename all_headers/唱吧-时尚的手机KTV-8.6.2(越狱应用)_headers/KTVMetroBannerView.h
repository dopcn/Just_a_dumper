//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVBaseView.h"

@class NSArray, NSMutableArray;

@interface KTVMetroBannerView : KTVBaseView
{
    NSArray *_items;
    NSMutableArray *_views;
}

@property(retain, nonatomic) NSMutableArray *views; // @synthesize views=_views;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)getViewItem:(id)arg1;
- (void)reloadData;
- (void)arrange;
- (void)createUI;
- (void)reloadData:(id)arg1;
- (id)initWithSize:(struct CGRect)arg1 items:(id)arg2;

@end

