//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASCellNode.h"

#import "CycleScrollViewDataSource-Protocol.h"
#import "CycleScrollViewDelegate-Protocol.h"

@class ASDisplayNode, JDMainPageCycleScrollView, JDSHHdxCellEightViewModel, NSString, UIPageControl;

@interface JDSHHdxCellEight : ASCellNode <CycleScrollViewDataSource, CycleScrollViewDelegate>
{
    double kImageHeight;
    double kImageWidth;
    JDMainPageCycleScrollView *_cycleView;
    ASDisplayNode *_cycleNode;
    ASDisplayNode *_pageControlNode;
    UIPageControl *_pageControl;
    JDSHHdxCellEightViewModel *_hdxBannerModel;
}

@property(retain, nonatomic) JDSHHdxCellEightViewModel *hdxBannerModel; // @synthesize hdxBannerModel=_hdxBannerModel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) ASDisplayNode *pageControlNode; // @synthesize pageControlNode=_pageControlNode;
@property(retain, nonatomic) ASDisplayNode *cycleNode; // @synthesize cycleNode=_cycleNode;
@property(retain, nonatomic) JDMainPageCycleScrollView *cycleView; // @synthesize cycleView=_cycleView;
- (void).cxx_destruct;
- (void)setDelegateAndDataSourceToSelf;
- (void)tapBannerPicAtIndex:(long long)arg1;
- (void)autoAnimateViewAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)didLoad;
- (void)layout;
- (void)configCellWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

