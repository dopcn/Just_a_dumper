//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface auxiary : NSObject
{
}

+ (int)getPlainPIN:(id)arg1 _keyPin:(const struct ByteArray *)arg2 _plainPin:(struct ByteArray *)arg3;
+ (int)paddingAndEncrypt:(id)arg1 _oldPin:(const struct ByteArray *)arg2 _newPin:(const struct ByteArray *)arg3 _random:(const struct ByteArray *)arg4 _cipher:(struct ByteArray *)arg5 _peChse:(int)arg6 _isReloadPin:(_Bool)arg7 _soAndAlg:(struct ByteArray *)arg8;
+ (_Bool)tradeDataBlock:(const struct ByteArray *)arg1 _dataLst:(list_0bf94ba2 *)arg2;
+ (void)dataBlock:(const struct ByteArray *)arg1 _block:(int *)arg2 _left:(int *)arg3;
+ (void)writeFileBlock:(const int *)arg1 _block:(int *)arg2 _left:(int *)arg3;
+ (void)randomBlock:(const int *)arg1 _block:(int *)arg2 _left:(int *)arg3;
+ (_Bool)findx:(const struct ByteArray *)arg1 _param2:(const struct ByteArray *)arg2 _b:(unsigned char)arg3;

@end

