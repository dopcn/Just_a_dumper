//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TTModel : NSObject
{
}

+ (id)propertyKeys;
+ (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

