//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, PLUAccountClient;

@interface PLUModifyGenderViewModel : NSObject
{
    NSString *_tips;
    PLUAccountClient *_client;
    NSNumber *_searchSuccess;
    NSNumber *_requestLoading;
}

@property(retain, nonatomic) NSNumber *requestLoading; // @synthesize requestLoading=_requestLoading;
@property(retain, nonatomic) NSNumber *searchSuccess; // @synthesize searchSuccess=_searchSuccess;
@property(retain, nonatomic) PLUAccountClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
- (void).cxx_destruct;
- (void)resetAccountWithGender:(id)arg1;
- (id)init;

@end

