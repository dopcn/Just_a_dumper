//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface BDListViewManager : RCTViewManager
{
}

+ (id)__rct_export__1686;
+ (id)__rct_export__1545;
+ (id)__rct_export__1414;
+ (id)__rct_export__1263;
+ (id)__rct_export__1112;
+ (id)__rct_export__861;
+ (id)__rct_export__660;
+ (id)propConfig_onChangeVisibleRows;
+ (id)propConfig_onScrollAnimationEnd;
+ (id)propConfig_onMomentumScrollEnd;
+ (id)propConfig_onMomentumScrollBegin;
+ (id)propConfig_onScrollEndDrag;
+ (id)propConfig_onScrollBeginDrag;
+ (id)propConfig_onScroll;
+ (id)propConfig_onRowSelected;
+ (id)propConfig_scrollEventThrottle;
+ (id)propConfig_contentOffset;
+ (id)propConfig_scrollIndicatorInsets;
+ (id)propConfig_contentInset;
+ (id)propConfig_zoomScale;
+ (id)propConfig_showsVerticalScrollIndicator;
+ (id)propConfig_scrollsToTop;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_minimumZoomScale;
+ (id)propConfig_maximumZoomScale;
+ (id)propConfig_keyboardDismissMode;
+ (id)propConfig_indicatorStyle;
+ (id)propConfig_directionalLockEnabled;
+ (id)propConfig_decelerationRate;
+ (id)propConfig_canCancelContentTouches;
+ (id)propConfig_bouncesZoom;
+ (id)propConfig_bounces;
+ (id)propConfig_alwaysBounceVertical;
+ (id)propConfig_alwaysBounceHorizontal;
+ (id)propConfig_fontScale;
+ (id)propConfig_nodeTree;
+ (void)load;
+ (id)moduleName;
- (void)postFontSizeScale:(id)arg1 scale:(double)arg2;
- (void)reloadRowsAtIndexes:(id)arg1 indexes:(id)arg2;
- (void)reloadData:(id)arg1;
- (void)scrollTo:(id)arg1 offsetX:(double)arg2 offsetY:(double)arg3 animated:(_Bool)arg4;
- (void)scrollToRowAtPosition:(id)arg1 toRow:(unsigned long long)arg2 atPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)getContentOffset:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getContentSize:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)shadowView;
- (id)view;

@end

