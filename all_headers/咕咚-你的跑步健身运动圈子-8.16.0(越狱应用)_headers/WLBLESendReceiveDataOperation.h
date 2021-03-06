//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WLBLEQueuingOperation.h"

@class NSData;

@interface WLBLESendReceiveDataOperation : WLBLEQueuingOperation
{
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)didUpdateValueForCharacteristic:(id)arg1 error:(id)arg2;
- (void)executeOperation;
- (_Bool)canProcessCharacteristic:(id)arg1;
- (_Bool)canProcessService:(id)arg1;
- (void)cancelOperationWithResult:(id)arg1;
- (void)finishOperationWithResult:(id)arg1;
- (void)didTimeout:(id)arg1;
- (void)operationQueue:(id)arg1 didFinishLastOperation:(id)arg2;
- (id)validateWithData:(id)arg1;
- (void)addOperations;
- (id)initWithPeripheralCommunicator:(id)arg1 writeData:(id)arg2 timeoutInterval:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

