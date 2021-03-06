//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NCXBorderView, NCXMiniwindowFreeCallVideoView, NCXMiniwindowGroupCallVideoView;

@interface NCXMiniwindowVideoView : UIView
{
    long long mType;
    NCXMiniwindowFreeCallVideoView *_freeCallVideoView;
    NCXMiniwindowGroupCallVideoView *_groupCallVideoView;
    NCXBorderView *_borderView;
}

+ (id)viewWithType:(long long)arg1;
@property(nonatomic) NCXBorderView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) NCXMiniwindowGroupCallVideoView *groupCallVideoView; // @synthesize groupCallVideoView=_groupCallVideoView;
@property(nonatomic) NCXMiniwindowFreeCallVideoView *freeCallVideoView; // @synthesize freeCallVideoView=_freeCallVideoView;
- (void)deminiaturize:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (void)awakeFromNib;

@end

