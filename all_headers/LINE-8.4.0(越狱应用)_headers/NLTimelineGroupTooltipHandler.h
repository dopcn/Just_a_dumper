//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MBPostViewController, _TtC4LINE19TimelineTooltipView;

@interface NLTimelineGroupTooltipHandler : NSObject
{
    MBPostViewController *_viewController;
    _TtC4LINE19TimelineTooltipView *_tooltipView;
}

@property(retain, nonatomic) _TtC4LINE19TimelineTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(nonatomic) __weak MBPostViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)hideGroupHomeGuideTooltip;
- (void)showGroupHomeGuideTooltipWithPost:(id)arg1 anchorView:(id)arg2;
- (id)groupHomeTooltipLayerView;
@property(readonly, nonatomic) _Bool isHiddenGroupHomeTooltip;
- (_Bool)isShowedGroupHomeTooltip;
- (void)setShowedGroupHomeTooltip;
- (id)initWithViewController:(id)arg1;

@end

