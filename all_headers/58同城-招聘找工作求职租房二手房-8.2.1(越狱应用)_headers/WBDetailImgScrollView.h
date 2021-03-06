//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseViewTemplate.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, UILabel, UIScrollView, WBImageScrollViewModel;

@interface WBDetailImgScrollView : WBDetailBaseViewTemplate <UIScrollViewDelegate>
{
    double _imageWidth;
    double _distance;
    _Bool _isPreLoadData;
    long long _imageType;
    NSArray *_imgUrlList;
    NSDictionary *_videoDic;
    UIScrollView *_scrollView;
    long long _currentPageIndex;
    UILabel *_noteTitle;
    WBImageScrollViewModel *_imageModel;
    NSIndexPath *_curIndexPath;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(nonatomic) _Bool isPreLoadData; // @synthesize isPreLoadData=_isPreLoadData;
@property(retain, nonatomic) NSIndexPath *curIndexPath; // @synthesize curIndexPath=_curIndexPath;
@property(retain, nonatomic) WBImageScrollViewModel *imageModel; // @synthesize imageModel=_imageModel;
@property(retain, nonatomic) UILabel *noteTitle; // @synthesize noteTitle=_noteTitle;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSDictionary *videoDic; // @synthesize videoDic=_videoDic;
@property(retain, nonatomic) NSArray *imgUrlList; // @synthesize imgUrlList=_imgUrlList;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
- (void).cxx_destruct;
- (void)configWidgetViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareWidgetViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)imagePressed:(id)arg1;
- (void)videoPlay:(id)arg1;
- (void)configScrollView;
- (void)dealloc;
- (id)initWithImageAreaData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

