//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectThreadLayoutProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellLayoutSpec, IGUser, NSString;

@interface IGDirectThreadPresenceViewModel : NSObject <IGDirectThreadLayoutProtocol, IGListDiffable>
{
    IGUser *_user;
    NSString *_module;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    long long _presenceStatus;
}

@property(readonly, nonatomic) long long presenceStatus; // @synthesize presenceStatus=_presenceStatus;
@property(readonly, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (double)cellHeight;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)shouldPresentProfilePicture;
- (_Bool)shouldAnimate;
- (id)text;
- (id)initWithPresenceStatus:(long long)arg1 layoutSpec:(id)arg2 user:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

