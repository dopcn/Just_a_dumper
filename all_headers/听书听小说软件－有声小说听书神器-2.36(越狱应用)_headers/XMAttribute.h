//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, XMMetadata;

@interface XMAttribute : NSObject
{
    long long _attrKey;
    NSString *_attrValue;
    NSString *_displayName;
    XMMetadata *_childMetadata;
}

@property(retain, nonatomic) XMMetadata *childMetadata; // @synthesize childMetadata=_childMetadata;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *attrValue; // @synthesize attrValue=_attrValue;
@property(nonatomic) long long attrKey; // @synthesize attrKey=_attrKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

