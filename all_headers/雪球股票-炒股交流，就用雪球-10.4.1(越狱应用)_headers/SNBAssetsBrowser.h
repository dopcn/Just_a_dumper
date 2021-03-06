//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNBBaseVC.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView;
@protocol SNBAssetsBrowserDelegate;

@interface SNBAssetsBrowser : SNBBaseVC <UIScrollViewDelegate>
{
    UIScrollView *_pagingScrollView;
    unsigned long long _currentPageIndex;
    NSArray *_photos;
    id <SNBAssetsBrowserDelegate> _delegate;
}

+ (void)libraryImageForAssetURL:(id)arg1 complation:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <SNBAssetsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)back;
- (struct CGRect)frameForImage:(id)arg1 AtIndex:(unsigned long long)arg2;
- (struct CGRect)frameForPagingScrollView;
- (id)initWithPhotos:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

