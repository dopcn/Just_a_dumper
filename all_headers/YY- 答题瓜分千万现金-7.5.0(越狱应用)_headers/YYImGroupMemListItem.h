//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface YYImGroupMemListItem : NSObject
{
    _Bool _isMe;
    NSString *_name;
    NSString *_iconUrl;
    long long _role;
    NSNumber *_userID;
}

@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

