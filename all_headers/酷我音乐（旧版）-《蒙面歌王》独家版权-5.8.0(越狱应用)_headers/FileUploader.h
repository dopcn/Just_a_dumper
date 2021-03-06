//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FileUploader : NSObject
{
    _Bool finish;
    NSString *opcode;
}

@property(retain) NSString *opcode; // @synthesize opcode;
@property _Bool finish; // @synthesize finish;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startSendMain:(id)arg1;
- (void)dealloc;
- (id)initWithOpcode:(id)arg1;
- (void)uploadUserSelection;
- (void)uploadDebugInfo;

@end

