//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSString;

@interface IGDirectPendingInboxNuxViewModel : NSObject <IGListDiffable>
{
    NSString *_nuxString;
    double _cellHeight;
}

@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) NSString *nuxString; // @synthesize nuxString=_nuxString;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)init;

@end

