//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol SNMBAddressInfoDTOProtocol;

@protocol SNMBAddressPickerProtocol <NSObject>

@optional
@property(copy, nonatomic) CDUnknownBlockType hideBlock;
@property(nonatomic) _Bool fiveNumberLesCode;
- (void)hide;
- (void)show;
- (id)showAddressInfoPickerView:(NSString *)arg1 baseAddress:(NSObject<SNMBAddressInfoDTOProtocol> *)arg2 componentStyle:(int)arg3 dataSource:(int)arg4 finalAddress:(void (^)(NSObject<SNMBAddressInfoDTOProtocol> *))arg5;
- (void)showAddressInfoPickerView:(NSString *)arg1 needList:(_Bool)arg2 baseAddress:(NSObject<SNMBAddressInfoDTOProtocol> *)arg3 componentStyle:(int)arg4 finalAddress:(void (^)(NSObject<SNMBAddressInfoDTOProtocol> *))arg5;
- (void)showAddressInfoPickerView:(NSString *)arg1 baseAddress:(NSObject<SNMBAddressInfoDTOProtocol> *)arg2 componentStyle:(int)arg3 finalAddress:(void (^)(NSObject<SNMBAddressInfoDTOProtocol> *))arg4;
@end

