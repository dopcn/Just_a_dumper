//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGReelOwnerType-Protocol.h"

@class NSString, NSURL;

@interface IGMultiAuthorReelOwner : NSObject <IGReelOwnerType>
{
    long long _type;
    NSString *_pk;
    NSString *_name;
    NSString *_coverImageAttributionUsername;
    NSString *_storyTypeString;
    NSURL *_coverImageURL;
}

+ (id)ownerWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(readonly, copy, nonatomic) NSString *storyTypeString; // @synthesize storyTypeString=_storyTypeString;
@property(readonly, copy, nonatomic) NSString *coverImageAttributionUsername; // @synthesize coverImageAttributionUsername=_coverImageAttributionUsername;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isMultiAuthorStoryOwner;
- (_Bool)isUser;
- (id)reelMultiAuthorStoryOwner;
- (id)reelUser;
- (id)reelLoggingInfo;
- (id)brandingIconImageName;
- (id)initWithPK:(id)arg1 name:(id)arg2 storyType:(id)arg3 coverImageAttributionUsername:(id)arg4 coverImageURL:(id)arg5;
- (void)navigateToOwnerPageViewControllerWithUserSession:(id)arg1 navigationController:(id)arg2;
- (_Bool)canNavigateToOwnerPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

