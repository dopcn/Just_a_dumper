//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMFavoriteProductBaseViewController.h"

@class JMFavoriteProductSearchBarView, NSArray, NSLayoutConstraint, UIView;

@interface JMProductSearchViewController : JMFavoriteProductBaseViewController
{
    UIView *_coverView;
    NSLayoutConstraint *_searBarTopC;
    JMFavoriteProductSearchBarView *_searchBar;
    NSArray *_dataSource;
}

@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak JMFavoriteProductSearchBarView *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak NSLayoutConstraint *searBarTopC; // @synthesize searBarTopC=_searBarTopC;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)initData;
- (void)coverViewShowAnimation;
- (void)coverViewHiddenAnimation;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)fixSearchViewUI;
- (void)setupView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;

@end

