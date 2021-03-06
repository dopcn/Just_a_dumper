//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData, NSString, NSThread, NSURLConnection;
@protocol BDVRDataUploaderDelegate;

@interface BDVRDataUploader : NSObject
{
    int _uploadType;
    _Bool _isProductIDSet;
    _Bool _isUploadCanceled;
    NSString *_productID;
    id <BDVRDataUploaderDelegate> _delegate;
    NSString *_uploadContactAddr;
    NSString *_uploadWordsAddr;
    NSString *_apiKey;
    NSString *_secretKey;
    NSThread *_httpRequestTask;
    NSURLConnection *_urlConnection;
    NSMutableData *_responseData;
}

@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property _Bool isUploadCanceled; // @synthesize isUploadCanceled=_isUploadCanceled;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSThread *httpRequestTask; // @synthesize httpRequestTask=_httpRequestTask;
@property(copy, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property _Bool isProductIDSet; // @synthesize isProductIDSet=_isProductIDSet;
@property(copy, nonatomic) NSString *uploadWordsAddr; // @synthesize uploadWordsAddr=_uploadWordsAddr;
@property(copy, nonatomic) NSString *uploadContactAddr; // @synthesize uploadContactAddr=_uploadContactAddr;
@property(nonatomic) id <BDVRDataUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void)setServerAddrToUploadWords:(id)arg1;
- (void)setServerAddrToUploadContact:(id)arg1;
- (id)resolveJSONData:(id)arg1;
- (id)generateUserInfoForError:(id)arg1;
- (id)generateGlobalKey;
- (void)cancelUpload;
- (id)generatePostData:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)httpRequestWithData:(id)arg1;
- (id)URLEncodeString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (id)generateRequestJsonString:(id)arg1 withSlot:(id)arg2;
- (void)uploadSlotWords:(id)arg1 withSlot:(id)arg2;
- (void)uploadContactsData:(id)arg1;
- (void)setApiKey:(id)arg1 withSecretKey:(id)arg2;
- (void)dealloc;
- (id)initDataUploader:(id)arg1;

@end

