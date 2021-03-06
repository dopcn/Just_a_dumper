//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NMTVCMascotGuideView, NSTimer, UITableView;

@interface NMTVCGuideAnimationHandler : NSObject
{
    NMTVCMascotGuideView *_mascotGuideView;
    UITableView *_tableView;
    _Bool _mascotGuideIsDismissing;
    _Bool _userIsBeginDragging;
    struct CGPoint _originTableViewContentOffset;
    NSTimer *_joltTimer;
    NSTimer *_dismissTimer;
    double _pullDownMascotOriginY;
    _Bool _mascotGuideIsAnimating;
}

+ (id)defaultHandler;
@property(nonatomic) _Bool mascotGuideIsAnimating; // @synthesize mascotGuideIsAnimating=_mascotGuideIsAnimating;
- (void).cxx_destruct;
- (void)playTVCVideoWithImageView:(id)arg1;
- (void)tableViewDidEndDragging;
- (void)tableViewBeginDragging;
- (void)pullDownWithOffsetY:(double)arg1 withTotalDistance:(double)arg2;
- (id)tvcVideoBackgroundImage;
- (void)resetAllData;
- (void)clearAllData;
- (void)stopMascotGuideAnimating;
- (void)endMascotGuideAnimation;
- (void)joltAnimation;
- (void)dismissMascotGuideAnimation;
- (void)showMascotGuideAnimation;
- (id)_recommendVCTableview;
- (void)_prepareMascotGuideView;
- (_Bool)tvcActivityIsUnderWay;
- (id)init;

@end

