//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, TPKTraveler;

@interface TPKVisitorInfoModifyModel : SAKDomainObject
{
    TPKTraveler *_modifyVisitor;
    NSArray *_visitors;
}

+ (id)visitorsJSONTransformer;
+ (id)modifyVisitorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *visitors; // @synthesize visitors=_visitors;
@property(retain, nonatomic) TPKTraveler *modifyVisitor; // @synthesize modifyVisitor=_modifyVisitor;
- (void).cxx_destruct;

@end

