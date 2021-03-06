//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SecNavViewDataSource-Protocol.h"
#import "SecNavViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol SecNavViewBizDelegate, SecNavViewDataSource, SecNavViewDelegate;

@interface SecNavView : UIView <SecNavViewDataSource, SecNavViewDelegate>
{
    NSArray *_navList;
    unsigned long long _selectedIndex;
    id <SecNavViewDataSource> _secNavViewDataSource;
    id <SecNavViewDelegate> _secNavViewDelegate;
    id <SecNavViewBizDelegate> _bizDelegate;
    NSMutableDictionary *_displayingPageViews;
    NSMutableDictionary *_displayingPageViewControllers;
}

@property(retain, nonatomic) NSMutableDictionary *displayingPageViewControllers; // @synthesize displayingPageViewControllers=_displayingPageViewControllers;
@property(retain, nonatomic) NSMutableDictionary *displayingPageViews; // @synthesize displayingPageViews=_displayingPageViews;
@property(nonatomic) __weak id <SecNavViewBizDelegate> bizDelegate; // @synthesize bizDelegate=_bizDelegate;
@property(nonatomic) __weak id <SecNavViewDelegate> secNavViewDelegate; // @synthesize secNavViewDelegate=_secNavViewDelegate;
@property(nonatomic) __weak id <SecNavViewDataSource> secNavViewDataSource; // @synthesize secNavViewDataSource=_secNavViewDataSource;
- (void).cxx_destruct;
- (void)refresh;
- (id)currentSelectedBizParentBiz;
- (id)currentSelectedBiz;
- (void)didSelectView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setScrollsToTop:(_Bool)arg1;
- (id)selectedViewController;
- (id)viewControllerWithBiz:(id)arg1;
- (void)loadHiidoReport;
- (void)_secNavView:(id)arg1 didSelectAtIndex:(unsigned long long)arg2 needsHiidoReport:(_Bool)arg3;
- (void)secNavView:(id)arg1 didSelectAtIndex:(unsigned long long)arg2;
- (id)secNavView:(id)arg1 AtIndex:(unsigned long long)arg2;
- (unsigned long long)pageCountOfSecNavView:(id)arg1;
- (void)scrollToTop:(_Bool)arg1;
- (void)configContentView:(id)arg1;
- (void)layoutSubviews;
- (id)createViewByIndex:(unsigned long long)arg1 withNavInfo:(id)arg2;
- (void)reloadPageViews;
- (id)initWithNavList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

