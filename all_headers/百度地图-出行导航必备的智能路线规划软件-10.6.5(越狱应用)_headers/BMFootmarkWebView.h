//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ModuleWebViewPage.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSNumber, NSString, UIView;

@interface BMFootmarkWebView : ModuleWebViewPage <UIScrollViewDelegate>
{
    long long _dragStart;
    UIView *_backView;
    NSArray *_cityList;
    NSArray *_provList;
    NSArray *_cityNewList;
    NSArray *_provNewList;
    NSNumber *_westToEast;
    NSNumber *_northToSouth;
    NSNumber *_homecityDistrict;
}

@property(nonatomic) NSNumber *homecityDistrict; // @synthesize homecityDistrict=_homecityDistrict;
@property(nonatomic) NSNumber *northToSouth; // @synthesize northToSouth=_northToSouth;
@property(nonatomic) NSNumber *westToEast; // @synthesize westToEast=_westToEast;
@property(retain, nonatomic) NSArray *provNewList; // @synthesize provNewList=_provNewList;
@property(retain, nonatomic) NSArray *cityNewList; // @synthesize cityNewList=_cityNewList;
@property(retain, nonatomic) NSArray *provList; // @synthesize provList=_provList;
@property(retain, nonatomic) NSArray *cityList; // @synthesize cityList=_cityList;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) long long dragStart; // @synthesize dragStart=_dragStart;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)evalJSCode:(id)arg1;
- (void)onClickBack:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)pageResult:(int)arg1 requestCode:(int)arg2 data:(id)arg3;
- (void)pageCreate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

