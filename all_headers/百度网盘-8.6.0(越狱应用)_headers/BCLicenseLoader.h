//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BCLicenseLoaderDelegate;

@interface BCLicenseLoader : NSObject
{
    id <BCLicenseLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <BCLicenseLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)requestDataWithItendityStruct:(struct Identification)arg1;
- (struct Identification)identyWithApiKey:(id)arg1;
- (void)loadLicenseWithAPIKey:(id)arg1;

@end

