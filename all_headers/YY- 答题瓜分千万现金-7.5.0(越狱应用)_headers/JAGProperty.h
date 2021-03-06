//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface JAGProperty : NSObject
{
    struct objc_property *_property;
    NSArray *_attributes;
}

+ (id)propertyWithObjCProperty:(struct objc_property *)arg1;
- (_Bool)canAcceptValue:(id)arg1;
- (_Bool)isCollection;
- (_Bool)isId;
- (_Bool)isBlock;
- (_Bool)isObject;
- (_Bool)isNumber;
- (Class)propertyClass;
- (id)ivarName;
- (id)oldTypeEncoding;
- (id)typeEncoding;
- (SEL)setter;
- (SEL)customSetter;
- (SEL)getter;
- (SEL)customGetter;
- (id)contentOfAttribute:(id)arg1;
- (_Bool)isEligibleForGarbageCollection;
- (_Bool)isWeak;
- (_Bool)isWeakReference;
- (_Bool)isDynamic;
- (_Bool)isNonAtomic;
- (int)setterSemantics;
- (_Bool)isReadOnly;
- (_Bool)hasAttribute:(id)arg1;
- (id)attributeEncodings;
- (id)name;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithObjCProperty:(struct objc_property *)arg1;

@end

