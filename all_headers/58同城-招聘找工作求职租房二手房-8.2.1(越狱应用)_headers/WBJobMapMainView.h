//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BMKPoiInfo, WBJobMapMainCardView;

@interface WBJobMapMainView : UIView
{
    BMKPoiInfo *_poi;
    WBJobMapMainCardView *_searchView;
}

@property(retain, nonatomic) WBJobMapMainCardView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) BMKPoiInfo *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (void)filterButtonClicked;
- (void)searchButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

