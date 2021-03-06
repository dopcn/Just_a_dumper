//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface CDShoppingCoinInfo : NSObject <NSCoding, NSCopying>
{
    double _availableCoinCount;
    double _currentAvailableCoinCount;
    double _currentAvailableCoinAmount;
    double _userPayAmount;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(nonatomic) double userPayAmount; // @synthesize userPayAmount=_userPayAmount;
@property(nonatomic) double currentAvailableCoinAmount; // @synthesize currentAvailableCoinAmount=_currentAvailableCoinAmount;
@property(nonatomic) double currentAvailableCoinCount; // @synthesize currentAvailableCoinCount=_currentAvailableCoinCount;
@property(nonatomic) double availableCoinCount; // @synthesize availableCoinCount=_availableCoinCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

