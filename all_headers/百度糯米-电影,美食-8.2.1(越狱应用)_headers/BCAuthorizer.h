//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BCLicenseLoaderDelegate-Protocol.h"

@class BCLicenseLoader, NSString;

@interface BCAuthorizer : NSObject <BCLicenseLoaderDelegate>
{
    _Bool _done;
    _Bool _verified;
    NSString *_apiKey;
    NSString *_localLicencePath;
    BCLicenseLoader *_licenseLoader;
}

@property(retain, nonatomic) BCLicenseLoader *licenseLoader; // @synthesize licenseLoader=_licenseLoader;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(retain, nonatomic) NSString *localLicencePath; // @synthesize localLicencePath=_localLicencePath;
@property(retain, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void).cxx_destruct;
- (void)licenseLoader:(id)arg1 didFailedWithError:(id)arg2;
- (void)licenseLoader:(id)arg1 didSucceedWithLicenseData:(id)arg2;
- (id)bundleId;
- (char *)decryptLicense:(id)arg1;
- (char *)decryptLicenseFile:(id)arg1;
- (void)getLatestLicenseData;
- (_Bool)verifyIdentityItem:(id)arg1;
- (_Bool)verifyLicense:(char *)arg1;
- (_Bool)verifyLicenceWithFile:(id)arg1;
- (_Bool)verifyWithLicenseInDocDir;
- (_Bool)verifyWithLicenseInMainBundle;
- (_Bool)verifyWithLicenseFile;
- (_Bool)isVerifyed;
- (_Bool)isDone;
- (_Bool)verifyWithToken:(id)arg1;
- (void)verifyWithAPIKey:(id)arg1 andLocalLicenceFile:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

