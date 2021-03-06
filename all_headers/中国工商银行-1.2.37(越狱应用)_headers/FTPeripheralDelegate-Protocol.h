//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FTPeripheral, NSData, NSError, NSString;

@protocol FTPeripheralDelegate <NSObject>

@optional
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateSpecificUUID2:(NSData *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateSpecificUUID1:(NSData *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateIEEE_11073_20601:(NSData *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateSystemId:(NSData *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateSoftwareRevision:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateFirmwareRevision:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateHardwareRevision:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateSerialNumber:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateModelNumber:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateManufactureName:(NSString *)arg2 error:(NSError *)arg3;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateTransDataNotifyStatus:(_Bool)arg2;
- (void)FTPeripheral:(FTPeripheral *)arg1 didSendTransparentDataStatus:(NSError *)arg2;
- (void)FTPeripheral:(FTPeripheral *)arg1 didWriteMemoryAddress:(NSError *)arg2;
- (void)FTPeripheral:(FTPeripheral *)arg1 didReceiveMemoryAddress:(NSData *)arg2 length:(short)arg3 data:(NSData *)arg4;
- (void)FTPeripheral:(FTPeripheral *)arg1 didReceiveTransparentData:(NSData *)arg2;
- (void)FTPeripheral:(FTPeripheral *)arg1 didChangePeripheralName:(NSError *)arg2;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateConnectionParameterStatus:(_Bool)arg2 interval:(unsigned short)arg3 timeout:(unsigned short)arg4 latency:(unsigned short)arg5;
- (void)FTPeripheral:(FTPeripheral *)arg1 didUpdateConnectionParameterAllowStatus:(_Bool)arg2;
@end

