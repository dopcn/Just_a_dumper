//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray;

@interface FTKFlightffpCard : SAKDomainObject
{
    NSArray *_cardType;
    NSArray *_desc;
    NSArray *_company;
}

+ (id)descJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *company; // @synthesize company=_company;
@property(retain, nonatomic) NSArray *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSArray *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;

@end

