//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol PFFileUploadController;

@interface ParseClientConfiguration : NSObject <NSCopying>
{
    _Bool _localDatastoreEnabled;
    NSString *_applicationId;
    NSString *_clientKey;
    NSString *_server;
    id <PFFileUploadController> _fileUploadController;
    NSString *_applicationGroupIdentifier;
    NSString *_containingApplicationBundleIdentifier;
    unsigned long long _networkRetryAttempts;
}

+ (id)configurationWithBlock:(CDUnknownBlockType)arg1;
+ (id)emptyConfiguration;
@property(nonatomic) unsigned long long networkRetryAttempts; // @synthesize networkRetryAttempts=_networkRetryAttempts;
@property(copy, nonatomic) NSString *containingApplicationBundleIdentifier; // @synthesize containingApplicationBundleIdentifier=_containingApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *applicationGroupIdentifier; // @synthesize applicationGroupIdentifier=_applicationGroupIdentifier;
@property(nonatomic, getter=isLocalDatastoreEnabled) _Bool localDatastoreEnabled; // @synthesize localDatastoreEnabled=_localDatastoreEnabled;
@property(retain, nonatomic) id <PFFileUploadController> fileUploadController; // @synthesize fileUploadController=_fileUploadController;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)_resetDataSharingIdentifiers;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initEmpty;

@end

