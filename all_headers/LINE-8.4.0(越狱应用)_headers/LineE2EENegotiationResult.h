//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LineE2EEPublicKey, NSSet;

@interface LineE2EENegotiationResult : NSObject
{
    NSSet *__allowedTypes;
    LineE2EEPublicKey *__publicKey;
    struct {
        unsigned int allowedTypes:1;
        unsigned int publicKey:1;
    } __isSet;
}

@property(retain, nonatomic) LineE2EEPublicKey *publicKey; // @synthesize publicKey=__publicKey;
@property(retain, nonatomic) NSSet *allowedTypes; // @synthesize allowedTypes=__allowedTypes;
- (void).cxx_destruct;
- (void)write:(id)arg1;
- (void)read:(id)arg1;

@end

