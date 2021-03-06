//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlistModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LSUserModel : PlistModel
{
    _Bool _artist;
    NSString *_userId;
    NSString *_nick;
    NSString *_contactName;
    NSString *_contactPhoneNumber;
    NSString *_deliverAddress;
}

+ (_Bool)asyncUpdateFromRemoteWithCompletedBlock:(CDUnknownBlockType)arg1;
+ (id)currentLSUserModel;
@property(retain, nonatomic) NSString *deliverAddress; // @synthesize deliverAddress=_deliverAddress;
@property(retain, nonatomic) NSString *contactPhoneNumber; // @synthesize contactPhoneNumber=_contactPhoneNumber;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) _Bool artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

