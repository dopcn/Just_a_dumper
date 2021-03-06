//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SHScreenOrientationStrategyProtocol-Protocol.h"

@class NSString;
@protocol SHScreenOrientationDelegate;

@interface SHScreenOrientationStrategy : NSObject <SHScreenOrientationStrategyProtocol>
{
    id <SHScreenOrientationDelegate> _delegate;
    CDUnknownBlockType _FullPortrait;
}

@property(copy, nonatomic) CDUnknownBlockType FullPortrait; // @synthesize FullPortrait=_FullPortrait;
@property(nonatomic) __weak id <SHScreenOrientationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)subclassResponsibility:(SEL)arg1;
- (void)changeVideoScreenWithType:(unsigned long long)arg1;
- (long long)defaultPlayerType;
- (long long)playerTypeWithChangeType:(unsigned long long)arg1;
- (_Bool)isFullPortrait;
- (unsigned long long)getChangeTypeWithStatus:(long long)arg1 isCurrentVideoVertical:(_Bool)arg2;
- (unsigned long long)getChangeTypeWithStatus:(long long)arg1 NextVideoItem:(id)arg2;
- (long long)playerVideoScreenTypeWithChangeType:(unsigned long long)arg1;
- (long long)updatePlayerTypeWithPreVideoStatus:(long long)arg1 NextVideoItem:(id)arg2;
- (long long)switchPlayerVideoScreenTypeWithChangeType:(unsigned long long)arg1;
- (long long)switchPlayerTypeWithPreVideoStatus:(long long)arg1 NextVideoItem:(id)arg2;
- (void)switchVideoScreenWithPreVideoStatus:(long long)arg1 NextVideoItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

