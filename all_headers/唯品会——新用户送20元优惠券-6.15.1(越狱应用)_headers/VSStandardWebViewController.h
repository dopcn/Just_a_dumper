//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSCDVAdapterController.h"

@class NSString, UIBarButtonItem;

@interface VSStandardWebViewController : VSCDVAdapterController
{
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forcedCloseBarButtonItem;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_searchBarButtonItem;
    NSString *_staticTitle;
    CDUnknownBlockType _shareButtonHandler;
    CDUnknownBlockType _searchButtonHandler;
}

@property(copy, nonatomic) CDUnknownBlockType searchButtonHandler; // @synthesize searchButtonHandler=_searchButtonHandler;
@property(copy, nonatomic) CDUnknownBlockType shareButtonHandler; // @synthesize shareButtonHandler=_shareButtonHandler;
@property(copy, nonatomic) NSString *staticTitle; // @synthesize staticTitle=_staticTitle;
@property(retain, nonatomic) UIBarButtonItem *searchBarButtonItem; // @synthesize searchBarButtonItem=_searchBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forcedCloseBarButtonItem; // @synthesize forcedCloseBarButtonItem=_forcedCloseBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
- (void).cxx_destruct;
- (void)didTouchUpInsideSearchBarButtonItem:(id)arg1;
- (void)didTouchUpInsideShareBarButtonItem:(id)arg1;
- (void)didTouchUpInsideForcedCloseBarButtonItem:(id)arg1;
- (void)didTouchUpInsideBackBarButtonItem:(id)arg1;
- (id)rightBarButtonItems;
- (void)setRightBarButtonItems:(id)arg1;
- (void)layoutTitleView;
- (void)setupLeftBarButtonItems;
- (void)dealloc;
- (void)createGapView;
- (void)viewDidLoad;

@end

