//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MTMYPhotoUploadToken : NSObject
{
    NSArray *_domain;
    NSString *_key;
    NSString *_token;
}

+ (id)defaultMapping;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSArray *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;

@end

