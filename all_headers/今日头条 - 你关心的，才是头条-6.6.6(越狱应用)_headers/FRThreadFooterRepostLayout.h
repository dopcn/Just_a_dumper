//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FRThreadFooterRepostContentLayout, FRThreadFooterRepostForwardCountLayout, FRThreadFooterRepostNameLayout, FRThreadFooterRepostTimeAndForwardLayout, FRThreadFooterRepostUserInfoLayout, NSNumber;
@protocol FRThreadFooterRepostProtocol;

@interface FRThreadFooterRepostLayout : NSObject
{
    _Bool _isUnFold;
    id <FRThreadFooterRepostProtocol> _repostModel;
    double _containerWidth;
    NSNumber *_identifier;
    double _cellHeight;
    double _cellWidth;
    unsigned long long _authorType;
    FRThreadFooterRepostNameLayout *_nameLayout;
    FRThreadFooterRepostContentLayout *_contentLayout;
    FRThreadFooterRepostUserInfoLayout *_userInfoLayout;
    FRThreadFooterRepostTimeAndForwardLayout *_timeLayout;
    FRThreadFooterRepostForwardCountLayout *_forwardCountLayout;
}

+ (double)heightForContentLabel:(id)arg1 constraintsWidth:(double)arg2 limitedToNumberOfLines:(unsigned long long)arg3;
@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold=_isUnFold;
@property(retain, nonatomic) FRThreadFooterRepostForwardCountLayout *forwardCountLayout; // @synthesize forwardCountLayout=_forwardCountLayout;
@property(retain, nonatomic) FRThreadFooterRepostTimeAndForwardLayout *timeLayout; // @synthesize timeLayout=_timeLayout;
@property(retain, nonatomic) FRThreadFooterRepostUserInfoLayout *userInfoLayout; // @synthesize userInfoLayout=_userInfoLayout;
@property(retain, nonatomic) FRThreadFooterRepostContentLayout *contentLayout; // @synthesize contentLayout=_contentLayout;
@property(retain, nonatomic) FRThreadFooterRepostNameLayout *nameLayout; // @synthesize nameLayout=_nameLayout;
@property(nonatomic) unsigned long long authorType; // @synthesize authorType=_authorType;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double containerWidth; // @synthesize containerWidth=_containerWidth;
@property(retain, nonatomic) id <FRThreadFooterRepostProtocol> repostModel; // @synthesize repostModel=_repostModel;
- (void).cxx_destruct;
- (id)userInfoLabelTextWith:(id)arg1;
- (_Bool)isSelfComment:(id)arg1;
- (void)setRepostModel:(id)arg1 ContainerWidth:(double)arg2;

@end

