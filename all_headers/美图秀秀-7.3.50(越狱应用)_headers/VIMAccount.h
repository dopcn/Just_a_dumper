//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString, VIMAccountCredential;

@interface VIMAccount : NSObject <NSCoding, NSSecureCoding>
{
    VIMAccountCredential *_credential;
    NSString *_username;
    NSMutableDictionary *_userData;
    id _serverResponse;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id serverResponse; // @synthesize serverResponse=_serverResponse;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) VIMAccountCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

